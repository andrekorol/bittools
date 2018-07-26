// Copyright 2018 Andre Rossi Korol

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "tests/attacks_tests/AttackerSuccessProbabilityTest.h"

#include "third_party/MinUnit/minunit.h"
#include "attacks/probabilities.h"

char * AttackerSuccessProbability_zEqualToZero_ReturnsOne() {
    double q;
    int z = 0;
    int result = 0;
    for (q = 0.0; q <= 1.0; q+= 0.1)
        result += AttackerSuccessProbability(q, z) != 1;
    mu_assert("AttackerSuccessProbability_zEqualToZero_ReturnsOne(): error: "
                "AttackerSuccessProbability() did not return 1 as expected",
                result == 0);
    return 0;
}

char * allAttackerSuccessProbabilityTests() {
    mu_run_test(AttackerSuccessProbability_zEqualToZero_ReturnsOne);
    return 0;
}