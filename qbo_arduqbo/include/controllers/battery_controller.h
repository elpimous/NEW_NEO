/*
 * Software License Agreement (GPLv2 License)
 * 
 * Copyright (c) 2012 Thecorpora, Inc.
 *
 * This program is free software; you can redistribute it and/or 
 * modify it under the terms of the GNU General Public License as 
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program; if not, write to the Free Software 
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, 
 * MA 02110-1301, USA.
 *
 * Authors: Miguel Angel Julian <miguel.a.j@openqbo.org>;
 * 
 */

#ifndef BATTERY_CONTROLLER_H
#define BATTERY_CONTROLLER_H

#include <driver/qboduino_driver.h>
#include <controllers/controllers_class.h>
#include "ros/ros.h"
#include <ros/console.h>
//#include "qbo_arduqbo/BatteryLevel.h"
#include "std_msgs/Float32.h"
#include "std_msgs/Int8.h"

class CBatteryController : public CController
{
    public:
        CBatteryController(std::string name, CQboduinoDriver *device_p, ros::NodeHandle& nh);
        
    protected:
	ros::Publisher battery_pub_;
	ros::Publisher status_pub_;

        float level_;
        uint8_t stat_;
        void timerCallback(const ros::TimerEvent& e);
};

#endif
