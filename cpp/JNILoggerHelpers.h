/**
 * Copyright 2004-present, Facebook, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <cstdint>

namespace facebook {
namespace profilo {
namespace logger_jni {

// These flags should match the ones from Logger.java
static constexpr uint32_t FILL_TIMESTAMP = 1 << 1;
static constexpr uint32_t FILL_TID = 1 << 2;

void registerNatives();

} // namespace logger_jni
} // namespace profilo
} // namespace facebook