// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef PLATFORM_PORT_DOWN_CAST_H_
#define PLATFORM_PORT_DOWN_CAST_H_

#include "platform/port/config.h"

#if NEARBY_USE_RTTI
#define DOWN_CAST dynamic_cast
#else
#define DOWN_CAST static_cast
#endif

#endif  // PLATFORM_PORT_DOWN_CAST_H_
