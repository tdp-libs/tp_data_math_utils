#ifndef tp_data_math_utils_RegionsMember_h
#define tp_data_math_utils_RegionsMember_h

#include "tp_data_math_utils/Globals.h"

#include "tp_data/AbstractMemberFactory.h"

#include "tp_math_utils/Region.h"

#include "json.hpp"

namespace tp_data_math_utils
{

//##################################################################################################
class RegionsMember : public tp_data::AbstractMember
{
public:
  //################################################################################################
  RegionsMember(const std::string& name=std::string());

  //################################################################################################
  ~RegionsMember();

  //################################################################################################
  static RegionsMember* fromJSON(const nlohmann::json& j);

  //################################################################################################
  nlohmann::json toJSON() const;

  std::vector<tp_math_utils::Region> data;
};

//##################################################################################################
using RegionsMemberFactory = tp_data::JSONMemberFactoryTemplate<RegionsMember, regionsSID>;

}

#endif
