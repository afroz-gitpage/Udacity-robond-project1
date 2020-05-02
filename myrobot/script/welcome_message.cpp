#include <gazebo/gazebo.hh> //directories pointer

namespace gazebo
{
  class WorldPluginMyRobot : public WorldPlugin //Creating a class from world plugin
  {
    public: WorldPluginMyRobot() : WorldPlugin()
            {
              printf("Welcome to Afroz’s World!!\n"); // printing out the message
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)//Loading the physics engine
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot) //Registering the plugin
}



