// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class StudyProject : ModuleRules
{
	public StudyProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { 
            // InitialModules
            "Core", "CoreUObject", "Engine", "InputCore",

            // JsonModules
            "Json", "JsonUtilities",

            "EnhancedInput",

            // AI
            "NavigationSystem",
            "AIModule",
            "GameplayTasks"
             });

        PrivateDependencyModuleNames.AddRange(new string[] { });
    }
}
