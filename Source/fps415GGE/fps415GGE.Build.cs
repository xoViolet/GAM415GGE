// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class fps415GGE : ModuleRules
{
	public fps415GGE(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "Niagara" });
	}
}
