#!/bin/bash
cd /home/ugv_ws/src/ugv_main/ugv_nav/maps
ros2 run nav2_map_server map_saver_cli -f ./map
cd -

