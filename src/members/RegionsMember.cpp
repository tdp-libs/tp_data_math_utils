#include "tp_data_math_utils/members/RegionsMember.h"

#include "tp_utils/DebugUtils.h"

namespace tp_data_math_utils
{
//##################################################################################################
RegionsMember::RegionsMember(const std::string& name):
  tp_data::AbstractMember(name, regionsSID())
{

}

//##################################################################################################
RegionsMember::~RegionsMember()=default;

//##################################################################################################
RegionsMember* RegionsMember::fromJSON(const nlohmann::json& j)
{
  TP_UNUSED(j);
  auto member = new RegionsMember();
  tpWarning() << "Implement RegionsMember::fromJSON.";
  return member;
}

//##################################################################################################
nlohmann::json RegionsMember::toJSON() const
{
  nlohmann::json j;
  tpWarning() << "Implement RegionsMember::toJSON.";
  return j;
}

}
