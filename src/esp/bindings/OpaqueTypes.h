// Copyright (c) Facebook, Inc. and its affiliates.
// This source code is licensed under the MIT license found in the
// LICENSE file in the root directory of this source tree.

#pragma once

#include <pybind11/eigen.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>

#include <map>
#include <vector>

#include "esp/core/esp.h"
#include "esp/nav/ActionSpacePath.h"

PYBIND11_MAKE_OPAQUE(std::map<std::string, std::string>);

PYBIND11_MAKE_OPAQUE(std::vector<esp::nav::ActionSpacePathLocation::ptr>);
