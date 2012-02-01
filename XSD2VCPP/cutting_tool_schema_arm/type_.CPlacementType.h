#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPlacementType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPlacementType



namespace cutting_tool_schema_arm
{

class CPlacementType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CPlacementType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CPlacementType(CPlacementType const& init);
	void operator=(CPlacementType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CPlacementType); }
	MemberElement<CGeometric_model_relationship_with_transformation, _altova_mi_altova_CPlacementType_altova_Geometric_model_relationship_with_transformation> Geometric_model_relationship_with_transformation;
	struct Geometric_model_relationship_with_transformation { typedef Iterator<CGeometric_model_relationship_with_transformation> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPlacementType
