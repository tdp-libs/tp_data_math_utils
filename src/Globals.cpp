#include "tp_data_math_utils/Globals.h"
#include "tp_data_math_utils/members/FloatsMember.h"
#include "tp_data_math_utils/members/PointsMember.h"
#include "tp_data_math_utils/members/Mat4Member.h"
#include "tp_data_math_utils/members/PolygonsMember.h"
#include "tp_data_math_utils/members/RegionsMember.h"
#include "tp_data_math_utils/members/Vec3Member.h"

#include "tp_data/CollectionFactory.h"

namespace tp_data_math_utils
{
tp_qt_DEFINE_ID(                     polygonsSID,                         "Polygons");
tp_qt_DEFINE_ID(                       floatsSID,                           "Floats");
tp_qt_DEFINE_ID(                       pointsSID,                           "Points");
tp_qt_DEFINE_ID(                      regionsSID,                          "Regions");
tp_qt_DEFINE_ID(                      matrix4SID,                         "Matrix 4");
tp_qt_DEFINE_ID(                      vector3SID,                         "Vector 3");

//##################################################################################################
void createCollectionFactories(tp_data::CollectionFactory& collectionFactory)
{
  collectionFactory.addMemberFactory(new   FloatsMemberFactory());
  collectionFactory.addMemberFactory(new   PointsMemberFactory());
  collectionFactory.addMemberFactory(new     Mat4MemberFactory());
  collectionFactory.addMemberFactory(new PolygonsMemberFactory());
  collectionFactory.addMemberFactory(new  RegionsMemberFactory());
  collectionFactory.addMemberFactory(new     Vec3MemberFactory());
}

REGISTER_CREATE_COLLECTION_FACTORIES;

//##################################################################################################
int staticInit()
{
  return 0;
}

}
