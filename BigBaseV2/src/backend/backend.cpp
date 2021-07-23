#include "backend.hpp"
#include "fiber_pool.hpp"
#include "script.hpp"
#include "looped/looped.hpp"

namespace big
{
	void backend::loop()
	{
		g.attempt_save();
		QUEUE_JOB_BEGIN_CLAUSE()
		{
			looped::system_screen_size();
			looped::system_update_players();
		}QUEUE_JOB_END_CLAUSE

		QUEUE_JOB_BEGIN_CLAUSE()
		{
			looped::self_godmode();
			looped::self_off_radar();
			looped::self_no_ragdoll();
		}QUEUE_JOB_END_CLAUSE

		QUEUE_JOB_BEGIN_CLAUSE()
		{
			looped::player_specate();
		}QUEUE_JOB_END_CLAUSE

		QUEUE_JOB_BEGIN_CLAUSE()
		{
			looped::self_noclip();
		}QUEUE_JOB_END_CLAUSE

		QUEUE_JOB_BEGIN_CLAUSE()
		{
			looped::weapons_cage_gun();
			looped::weapons_delete_gun();
			looped::weapons_gravity_gun();
			looped::weapons_steal_vehicle_gun();
			looped::weapons_repair_gun();
			looped::weapons_vehicle_gun();
		}QUEUE_JOB_END_CLAUSE

		QUEUE_JOB_BEGIN_CLAUSE()
		{
			looped::vehicle_horn_boost();
			looped::vehicle_speedo_meter();
		}QUEUE_JOB_END_CLAUSE
	}
}