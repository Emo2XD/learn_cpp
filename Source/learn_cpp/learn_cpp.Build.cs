// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class learn_cpp : ModuleRules
{
	public learn_cpp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
