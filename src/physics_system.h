/* ***********************************************************************
 * Tank Game Multiplayer
 * (C) 2018 by Yiannis     Bourkelis  (hello@andama.org)
 * (C) 2018 by Christos    Paraskevas (cparaskevas91@gmail.com)
 * (C) 2018 by Constantine Sarmidis   (hello@andama.org)
 *
 * This file is part of Tank Game Multiplayer.
 *
 * Tank Game Multiplayer is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Tank Game Multiplayer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Tank Game Multiplayer.  If not, see <http://www.gnu.org/licenses/>.
 * ***********************************************************************/

#ifndef PHYSICS_SYSTEM_H
#define PHYSICS_SYSTEM_H

#ifdef _WIN32
#define _USE_MATH_DEFINES
#endif

#include <chrono>
#include <cmath>
#include <iostream>
#include <vector>
#include "entity.h"
#include "collision_system.h"

class PhysicsSystem
{
public:
    PhysicsSystem();

    void Update(const std::chrono::milliseconds::rep &deltaTime, const Entity& entity,  std::vector<std::unique_ptr<Entity>>::const_iterator& in_it);
    void UpdateAngularVelocity(const std::chrono::milliseconds::rep &deltaTime, const Entity &entity);
    void UpdateVelocity(const std::chrono::milliseconds::rep &deltaTime, const Entity &entity);
    void UpdatePosition(const std::chrono::milliseconds::rep &deltaTime, const Entity &entity);
    void UpdateDeltaRotationDegrees(const std::chrono::milliseconds::rep &deltaTime, const Entity &entity);
    void UpdateAngularAcceleration (const Entity &entity);
    void UpdateForce(const Entity &entity);
    void UpdateAcceleration(const Entity &entity);
    void UpdateVelocityDegrees(const Entity &entity);
};

#endif // PHYSICS_SYSTEM_H
