// ======================================================================== //
// Copyright 2009-2015 Intel Corporation                                    //
//                                                                          //
// Licensed under the Apache License, Version 2.0 (the "License");          //
// you may not use this file except in compliance with the License.         //
// You may obtain a copy of the License at                                  //
//                                                                          //
//     http://www.apache.org/licenses/LICENSE-2.0                           //
//                                                                          //
// Unless required by applicable law or agreed to in writing, software      //
// distributed under the License is distributed on an "AS IS" BASIS,        //
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. //
// See the License for the specific language governing permissions and      //
// limitations under the License.                                           //
// ======================================================================== //

#include "triangle4i.h"

namespace embree
{
  Triangle4i::Type Triangle4i::type;

  Triangle4i::Type::Type () 
    : PrimitiveType("triangle4i",sizeof(Triangle4i),4) {} 
  
  size_t Triangle4i::Type::size(const char* This) const {
    return ((Triangle4i*)This)->size();
  }
}
