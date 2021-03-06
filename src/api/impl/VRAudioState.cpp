/** 
This file is part of the MinVR Open Source Project, which is developed and 
maintained collaboratively by the University of Minnesota and Brown University.

Copyright (c) 2016 Regents of the University of Minnesota and Brown University.
This software is distributed under the BSD-3 Clause license, which can be found
at: MinVR/LICENSE.txt.

Original Author(s) of this File: 
	Dan Keefe, 2017, University of Minnesota
	
Author(s) of Significant Updates/Modifications to the File:
	... 
*/


#include "api/VRAudioState.h"
#include "config/VRDataIndex.h"

namespace MinVR {

VRAudioState::VRAudioState(const VRDataIndex &internalIndex) : _index(internalIndex) {

}

VRAudioState::~VRAudioState() {

}

const VRDataIndex& VRAudioState::index() const {
	return _index;
}


} // end namespace
