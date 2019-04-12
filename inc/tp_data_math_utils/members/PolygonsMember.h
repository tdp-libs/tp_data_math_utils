#ifndef tp_data_math_utils_PolygonsMember_h
#define tp_data_math_utils_PolygonsMember_h

#include "tp_data_math_utils/Globals.h"

#include "tp_math_utils/Polygon.h"

#include "tp_data/AbstractMemberFactory.h"

#include "json.hpp"

namespace tp_data_math_utils
{

//##################################################################################################
class PolygonsMember : public tp_data::AbstractMember
{
public:
  //################################################################################################
  PolygonsMember(const std::string& name=std::string());

  //################################################################################################
  ~PolygonsMember();

  //################################################################################################
  static PolygonsMember* fromJSON(const nlohmann::json& j);

  //################################################################################################
  nlohmann::json toJSON() const;

  std::vector<tp_math_utils::Polygon> data;
};

//##################################################################################################
using PolygonsMemberFactory = tp_data::JSONMemberFactoryTemplate<PolygonsMember, polygonsSID>;

}

#endif
