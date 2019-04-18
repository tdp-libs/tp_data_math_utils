#ifndef tp_data_math_utils_Globals_h
#define tp_data_math_utils_Globals_h

#include "tp_utils/StringID.h"

namespace tp_data
{
class CollectionFactory;
}

//##################################################################################################
//! Adds math utils data types to tp_data.
namespace tp_data_math_utils
{
TDP_DECLARE_ID(                     polygonsSID,                         "Polygons")
TDP_DECLARE_ID(                       floatsSID,                           "Floats")
TDP_DECLARE_ID(                       pointsSID,                           "Points")
TDP_DECLARE_ID(                      regionsSID,                          "Regions")
TDP_DECLARE_ID(                      matrix4SID,                         "Matrix 4")
TDP_DECLARE_ID(                      vector3SID,                         "Vector 3")

//##################################################################################################
//! Add the collection factories that this module provides to the CollectionFactory
void createCollectionFactories(tp_data::CollectionFactory& collectionFactory);
}

#endif
