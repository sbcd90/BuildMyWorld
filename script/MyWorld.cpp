#include <gazebo/gazebo.hh>

namespace gazebo {
	class MyWorldPlugin: public WorldPlugin {
	public:
		MyWorldPlugin(): WorldPlugin() {
			printf("Welcome to Subhobrata’s World!\n");
		}

		void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) {
		}
	};
	GZ_REGISTER_WORLD_PLUGIN(MyWorldPlugin)
}
