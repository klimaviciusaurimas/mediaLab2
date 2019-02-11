// Copyright 2018 Michal Cieciura. All Rights Reserved.

#include "IPointCloudRuntimeModule.h"

#if ENGINE_MINOR_VERSION >= 21
#include "Misc/Paths.h"
#include "Interfaces/IPluginManager.h"
#include "ShaderCore.h"
#endif

class FPointCloudRuntimeModule : public IPointCloudRuntimeModule
{
	// Begin IModuleInterface Interface
	virtual void StartupModule() override
	{
#if ENGINE_MINOR_VERSION >= 21
		AddShaderSourceDirectoryMapping(TEXT("/Plugin/PointCloudPlugin"), FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("PointCloudPlugin"))->GetBaseDir(), TEXT("Shaders")));
#endif
	}
	virtual void ShutdownModule() override {}
	// End IModuleInterface Interface
};

IMPLEMENT_MODULE(FPointCloudRuntimeModule, PointCloudRuntime)

