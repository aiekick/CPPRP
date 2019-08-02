#pragma once
#include <stdint.h>
#include <sstream>
#include "CPPBitReader.h"

#define __ParserAttribute__(...)

//__ParserAttribute__(Consume, false)
//struct abc
//{
//	uint8_t test;
//	uint32_t test2;
//
//	__ParserAttribute__(MaxBits, 500)
//	uint16_t test3;
//};
//

//__ParserAttribute__(Consume, false)
struct ReplicatedRBState {
	Quat rotation; //16 bytes
	Vector3 position; //12 bytes
	Vector3 linear_velocity; //12 bytes
	Vector3 angular_velocity; //12 bytes
	bool sleeping;
};

struct LogoData
{
	uint8_t unknown;
	uint32_t logo_id;
};

struct ActiveActor
{
	bool active;
	int32_t actor_id;
};

struct ObjectTarget
{
	bool unknown;
	int32_t object_index;
};

//__ParserAttribute__(Consume, false)
struct UniqueId
{
	uint8_t platform;
	uint8_t player_number;
	uint8_t* id;
};

struct Reservation
{
	uint32_t unknown;
	UniqueId player_id;
	std::string player_name;
	uint8_t unknown2;
};

//__ParserAttribute__(Consume, false)
struct ClientLoadout
{
	uint8_t version;
	uint32_t body;
	uint32_t skin;
	uint32_t wheels;
	uint32_t boost;
	uint32_t antenna;
	uint32_t hat;
	uint32_t unknown2;

	uint32_t unknown3;
	uint32_t engine_audio;
	uint32_t trail;
	uint32_t goal_explosion;
	uint32_t banner;
	uint32_t unknown4;
	uint32_t unknown5;
	uint32_t unknown6;
	uint32_t unknown7;
};

struct CameraSettings
{
	float FOV;
	float height;
	float pitch;
	float distance;
	float stiffness;
	float swivelspeed;
	float transitionspeed;
};

struct ReplicatedPickupData
{
	bool unknown1;
	int32_t actor_id;
	bool picked_up;
};

struct TeamPaint
{
	uint8_t team_number;
	uint8_t team_color_id;
	uint8_t custom_color_id;
	uint32_t team_finish_id;
	uint32_t custom_finish_id;
};

struct ReplicatedDemolish
{
	bool unknown1;
	int32_t attacker_actor_id;
	bool unknown2;
	int32_t victim_actor_id;
	Vector3 attacker_velocity;
	Vector3 victim_velocity;
};

struct ReplicatedMusicStringer
{
	bool unknown1;
	uint32_t object_index;
	uint8_t trigger;
	
};

struct PrivateMatchSettings
{
	std::string mutators;
	uint32_t map_name;
	uint32_t max_player_count;
	std::string game_name;
	std::string password;
	bool is_public;
};

//__ParserAttribute__(Consume, false)
struct ProductAttribute
{
	uint32_t class_index;
	std::string class_name;
	void* value;
	bool has_value;
	bool unknown1;
};

struct Attributes
{
	uint8_t attributes_count;

	__ParserAttribute__(CallConsume, true)
	std::vector<ProductAttribute> product_attributes;
};

struct OnlineLoadout
{
	uint8_t attributes_list_count;

	__ParserAttribute__(CallConsume, true)
	std::vector<Attributes> attributes_list;
};

struct UserColorAttribute
{
	uint8_t r, g, b, a;
};

//__ParserAttribute__(Consume, false)
struct ClientLoadoutsOnline
{
	__ParserAttribute__(CallConsume, true)
	OnlineLoadout online_one;
	__ParserAttribute__(CallConsume, true)
	OnlineLoadout online_two;
	bool loadout_set;
	bool is_deprecated;
};

struct ClientLoadouts
{
	__ParserAttribute__(CallConsume, true)
	ClientLoadout loadout_one;
	__ParserAttribute__(CallConsume, true)
	ClientLoadout loadout_two;
};

struct ClubColors
{
	bool team_color_set;
	uint8_t team_color_id;
	bool custom_color_set;
	uint8_t custom_color_id;
};

struct WeldedInfo
{
	bool active;
	int32_t actor_id;
	Vector3 offset;
	float mass;
	Rotator rotation;
};

enum EBreakoutDamageState
{
	DamageState_Start,
	DamageState_Damaged,
	DamageState_Broken,
	DamageState_MAX
};

struct DamageState
{
	uint8_t damage_state;
	bool unknown2;
	int32_t causer_actor_id;
	Vector3 damage_location;
	bool direct_damage;
	bool immediate;
};

struct AppliedDamage
{
	uint8_t id;
	Vector3 position;
	int32_t damage_index;
	int32_t total_damage;
};

struct ReplicatedExplosionData
{
	bool unknown1;
	uint32_t actor_id;
	Vector3 position;
};

struct ReplicatedExplosionDataExtended
{
	ReplicatedExplosionData red;
	uint8_t unknown3;
	uint32_t unknown4;
};

struct ReplicatedTitle
{
	bool unknown1;
	bool unknown2;
	uint32_t unknown3;
	uint32_t unknown4;
	uint32_t unknown5;
	uint32_t unknown6;
	uint32_t unknown7;
	bool unknown8;
};

struct HistoryKey
{
	__ParserAttribute__(NumBits, 14)
	uint16_t data;
};

struct ReplicatedStatEvent
{
	bool unknown1;
	int32_t object_id;
};

struct RepStatTitle
{
	bool unknown1;
	std::string name;

	__ParserAttribute__(CallConsume, true)
	ObjectTarget object_target;
	uint32_t value;
	
};