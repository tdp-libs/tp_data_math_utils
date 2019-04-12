#include "tp_data_math_utils/members/PolygonsMember.h"

namespace tp_data_math_utils
{
//##################################################################################################
PolygonsMember::PolygonsMember(const std::string& name):
  tp_data::AbstractMember(name, polygonsSID())
{

}

//##################################################################################################
PolygonsMember::~PolygonsMember()=default;

//##################################################################################################
PolygonsMember* PolygonsMember::fromJSON(const nlohmann::json& j)
{
  auto member = new PolygonsMember();
  tp_math_utils::deserializePolygons(j, member->data);
  return member;
}

//##################################################################################################
nlohmann::json PolygonsMember::toJSON() const
{
  return tp_math_utils::serializePolygons(data);
}

}
