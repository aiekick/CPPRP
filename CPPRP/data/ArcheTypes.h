#pragma once
#include <vector>
#include <string>
namespace CPPRP
{
	static const std::vector<std::pair<std::string, std::vector<std::string>>> archetypeMap =
	{
		{{"TAGame.Car_TA"}, {"Archetypes.Car.Car_Default"}},
		{{"TAGame.Car_TA"}, {"Mutators.Mutators.Mutators.FreePlay:CarArchetype"}},
		{{"TAGame.Ball_TA"}, { "Archetypes.Ball.Ball_Training"}},
		{{"TAGame.Ball_TA"},  {"Archetypes.Ball.Ball_GameEditor", "Archetypes.Ball.Ball_Default", "Archetypes.Ball.Ball_Basketball", "Archetypes.Ball.Ball_BasketBall", "Archetypes.Ball.Ball_BasketBall_Mutator", "Archetypes.Ball.Ball_Puck", "Archetypes.Ball.CubeBall", "Archetypes.Ball.Ball_Beachball"}},
		{{"TAGame.Ball_Breakout_TA"}, {"Archetypes.Ball.Ball_Breakout"}},
		{{"TAGame.Ball_TA"},{"Archetypes.Ball.Ball_Trajectory"}},
		{{"TAGame.CarComponent_Boost_TA"}, {"Archetypes.CarComponents.CarComponent_Boost"}},
		{{"TAGame.CarComponent_Dodge_TA"}, {"Archetypes.CarComponents.CarComponent_Dodge"}},
		{{"TAGame.CarComponent_DoubleJump_TA"}, {"Archetypes.CarComponents.CarComponent_DoubleJump"}},
		{{"TAGame.CarComponent_FlipCar_TA"}, {"Archetypes.CarComponents.CarComponent_FlipCar"}},
		{{"TAGame.CarComponent_Jump_TA"}, {"Archetypes.CarComponents.CarComponent_Jump"}},
		{{"TAGame.Team_Soccar_TA"}, {"Archetypes.Teams.Team0", "Archetypes.Teams.Team1"}},
		{{"TAGame.PRI_TA"}, {"TAGame.Default__PRI_TA"}},
		{{"TAGame.GameEvent_TrainingEditor_TA"}, {"Archetypes.GameEvent.GameEvent_TrainingEditor"}},
		{{"TAGame.GameEvent_Tutorial_TA"}, {"GameInfo_Tutorial.GameEvent.GameEvent_Tutorial_Aerial"}},
		{{"TAGame.GameEvent_Soccar_TA"}, {/*"GameInfo_Tutorial.GameEvent.GameEvent_Tutorial_Aerial",*/ "Archetypes.GameEvent.GameEvent_Basketball", "Archetypes.GameEvent.GameEvent_Hockey", "Archetypes.GameEvent.GameEvent_Soccar", "Archetypes.GameEvent.GameEvent_Items", "Archetypes.GameEvent.GameEvent_SoccarLan"}},
		{{"TAGame.GameEvent_SoccarPrivate_TA"}, {"Archetypes.GameEvent.GameEvent_SoccarPrivate", "Archetypes.GameEvent.GameEvent_BasketballPrivate", "Archetypes.GameEvent.GameEvent_HockeyPrivate"}},
		{{"TAGame.GameEvent_SoccarSplitscreen_TA"}, {"Archetypes.GameEvent.GameEvent_SoccarSplitscreen", "Archetypes.GameEvent.GameEvent_BasketballSplitscreen", "Archetypes.GameEvent.GameEvent_HockeySplitscreen"}},
		{{"TAGame.GameEvent_Season_TA"}, {"Archetypes.GameEvent.GameEvent_Season"}},
		{{"TAGame.Car_TA"}, {"Archetypes.GameEvent.GameEvent_Season:CarArchetype"}},
		{{"TAGame.GameEvent_Breakout_TA"}, {"Archetypes.GameEvent.GameEvent_Breakout"}},
		{{"TAGame.GRI_TA"}, {"GameInfo_TrainingEditor.GameInfo.GameInfo_TrainingEditor:GameReplicationInfoArchetype", "GameInfo_Tutorial.GameInfo.GameInfo_Tutorial:GameReplicationInfoArchetype", "GameInfo_Basketball.GameInfo.GameInfo_Basketball:GameReplicationInfoArchetype", "Gameinfo_Hockey.GameInfo.Gameinfo_Hockey:GameReplicationInfoArchetype", "GameInfo_Season.GameInfo.GameInfo_Season:GameReplicationInfoArchetype", "GameInfo_Soccar.GameInfo.GameInfo_Soccar:GameReplicationInfoArchetype", "GameInfo_Items.GameInfo.GameInfo_Items:GameReplicationInfoArchetype", "GameInfo_Breakout.GameInfo.GameInfo_Breakout:GameReplicationInfoArchetype"}},
		{{"TAGame.CameraSettingsActor_TA"}, {"TAGame.Default__CameraSettingsActor_TA"}},
		{{"TAGame.InMapScoreboard_TA"}, {"Neotokyo_p.TheWorld:PersistentLevel.InMapScoreboard_TA_0", "NeoTokyo_P.TheWorld:PersistentLevel.InMapScoreboard_TA_0", "NeoTokyo_P.TheWorld:PersistentLevel.InMapScoreboard_TA_1", "NeoTokyo_Standard_P.TheWorld:PersistentLevel.InMapScoreboard_TA_1", "NeoTokyo_Standard_P.TheWorld:PersistentLevel.InMapScoreboard_TA_0", "Neotokyo_p.TheWorld:PersistentLevel.InMapScoreboard_TA_1"}},
		{{"TAGame.SpecialPickup_BallGravity_TA"}, {"Archetypes.SpecialPickups.SpecialPickup_GravityWell"}},
		{{"TAGame.SpecialPickup_BallVelcro_TA"}, {"Archetypes.SpecialPickups.SpecialPickup_BallVelcro"}},
		{{"TAGame.SpecialPickup_BallLasso_TA"}, {"Archetypes.SpecialPickups.SpecialPickup_BallLasso"}},
		{{"TAGame.SpecialPickup_GrapplingHook_TA"}, {"Archetypes.SpecialPickups.SpecialPickup_BallGrapplingHook"}},
		{{"TAGame.SpecialPickup_Swapper_TA"}, {"Archetypes.SpecialPickups.SpecialPickup_Swapper"}},
		{{"TAGame.SpecialPickup_BallFreeze_TA"}, {"Archetypes.SpecialPickups.SpecialPickup_BallFreeze"}},
		{{"TAGame.SpecialPickup_BoostOverride_TA"}, {"Archetypes.SpecialPickups.SpecialPickup_BoostOverride"}},
		{{"TAGame.SpecialPickup_Tornado_TA"}, {"Archetypes.SpecialPickups.SpecialPickup_Tornado"}},
		{{"TAGame.SpecialPickup_BallCarSpring_TA"}, {"Archetypes.SpecialPickups.SpecialPickup_CarSpring", "Archetypes.SpecialPickups.SpecialPickup_BallSpring"}},
		{{"TAGame.SpecialPickup_HitForce_TA"}, {"Archetypes.SpecialPickups.SpecialPickup_StrongHit"}},
		{{"TAGame.SpecialPickup_Batarang_TA"}, {"Archetypes.SpecialPickups.SpecialPickup_Batarang"}},
		//{{"TAGame.SpecialPickup_TA"}, {"Archetypes.SpecialPickups.SpecialPickup_Swapper"}},
		//{{"TAGame.SpecialPickup_TA"}, {"Archetypes.SpecialPickups.SpecialPickup_GravityWell"}},
		//{{"TAGame.InMapScoreboard_TA"}, {"Neotokyo_p.TheWorld:PersistentLevel.InMapScoreboard_TA_1"}},
		{{"TAGame.Ball_Haunted_TA"}, {"Archetypes.Ball.Ball_Haunted"}},
		{{"TAGame.HauntedBallTrapTrigger_TA"}, {"Haunted_TrainStation_P.TheWorld:PersistentLevel.HauntedBallTrapTrigger_TA_1", "Haunted_TrainStation_P.TheWorld:PersistentLevel.HauntedBallTrapTrigger_TA_0"}},
		{{"TAGame.SpecialPickup_HauntedBallBeam_TA"}, {"Archetypes.SpecialPickups.SpecialPickup_HauntedBallBeam"}},
		{{"TAGame.SpecialPickup_Rugby_TA"}, {"Archetypes.SpecialPickups.SpecialPickup_Rugby"}},
		{{"TAGame.Cannon_TA"},  {"Archetypes.Tutorial.Cannon"}},
		{{"ProjectX.NetModeReplicator_X"}, {"ProjectX.Default__NetModeReplicator_X"}}
	};
}