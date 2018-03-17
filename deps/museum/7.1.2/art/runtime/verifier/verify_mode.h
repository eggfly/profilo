/*
 * Copyright (C) 2015 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ART_RUNTIME_VERIFIER_VERIFY_MODE_H_
#define ART_RUNTIME_VERIFIER_VERIFY_MODE_H_

#include <museum/7.1.2/bionic/libc/stdint.h>

namespace facebook { namespace museum { namespace MUSEUM_VERSION { namespace art {
namespace verifier {

// The mode that the verifier should run as.
enum class VerifyMode : int8_t {
  kNone,      // Everything is assumed verified.
  kEnable,    // Standard verification, try pre-verifying at compile-time.
  kSoftFail,  // Force a soft fail, punting to the interpreter with access checks.
};

}  // namespace verifier
} } } } // namespace facebook::museum::MUSEUM_VERSION::art

#endif  // ART_RUNTIME_VERIFIER_VERIFY_MODE_H_