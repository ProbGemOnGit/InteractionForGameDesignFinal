// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ResearchProject : ModuleRules
{
	public ResearchProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.NoPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ResearchProject",
			"ResearchProject/Variant_Platforming",
			"ResearchProject/Variant_Platforming/Animation",
			"ResearchProject/Variant_Combat",
			"ResearchProject/Variant_Combat/AI",
			"ResearchProject/Variant_Combat/Animation",
			"ResearchProject/Variant_Combat/Gameplay",
			"ResearchProject/Variant_Combat/Interfaces",
			"ResearchProject/Variant_Combat/UI",
			"ResearchProject/Variant_SideScrolling",
			"ResearchProject/Variant_SideScrolling/AI",
			"ResearchProject/Variant_SideScrolling/Gameplay",
			"ResearchProject/Variant_SideScrolling/Interfaces",
			"ResearchProject/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
