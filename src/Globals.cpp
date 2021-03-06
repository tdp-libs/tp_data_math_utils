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
TP_DEFINE_ID(                     polygonsSID,                         "Polygons");
TP_DEFINE_ID(                       floatsSID,                           "Floats");
TP_DEFINE_ID(                       pointsSID,                           "Points");
TP_DEFINE_ID(                      regionsSID,                          "Regions");
TP_DEFINE_ID(                      matrix4SID,                         "Matrix 4");
TP_DEFINE_ID(                      vector3SID,                         "Vector 3");

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
