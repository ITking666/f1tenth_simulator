//========================================================================
//  This software is free: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License Version 3,
//  as published by the Free Software Foundation.
//
//  This software is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License
//  Version 3 in the file COPYING that came with this distribution.
//  If not, see <http://www.gnu.org/licenses/>.
//========================================================================
/*!
  \file    simulator.h
  \brief   C++ Interface: Simulator
  \author  Yifeng Zhu, (C) 2020
  \email   yifeng.zhu@utexas.edu
*/
//========================================================================

#include "short_term_object.h"

ShortTermObject::ShortTermObject(){
  // x, y, angle
  pose_ = Eigen::Vector3f(0., 0., 0.);
  double r = 0.5;
  double eps = 0.001;
  // just a simple example
  template_lines_.push_back(geometry::line2f(Eigen::Vector2f(r - eps, r), Eigen::Vector2f(-r + eps, r)));
  template_lines_.push_back(geometry::line2f(Eigen::Vector2f(-r, r - eps), Eigen::Vector2f(-r, -r + eps)));
  template_lines_.push_back(geometry::line2f(Eigen::Vector2f(-r + eps, -r), Eigen::Vector2f(r - eps, -r)));
  template_lines_.push_back(geometry::line2f(Eigen::Vector2f(r, -r + eps), Eigen::Vector2f(r, r - eps)));

  pose_lines_ = template_lines_;
}

ShortTermObject::ShortTermObject(std::string config_file){
  // TODO: Load the shape from a config file
}



ShortTermObject::~ShortTermObject(){

}

