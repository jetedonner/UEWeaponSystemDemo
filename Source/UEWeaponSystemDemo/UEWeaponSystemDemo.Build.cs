// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UEWeaponSystemDemo : ModuleRules
{
	public UEWeaponSystemDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UEWeaponSystemPlugin" });
  
        PublicIncludePaths.AddRange(new string[] {"UEWeaponSystemPlugin/Public", "UEWeaponSystemPlugin/Classes" });
	}
}
