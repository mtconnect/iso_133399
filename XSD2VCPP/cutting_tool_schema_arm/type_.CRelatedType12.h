#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType12
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType12



namespace cutting_tool_schema_arm
{

class CRelatedType12 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRelatedType12(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRelatedType12(CRelatedType12 const& init);
	void operator=(CRelatedType12 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRelatedType12); }
	MemberElement<CProperty_value_representation, _altova_mi_altova_CRelatedType12_altova_Property_value_representation> Property_value_representation;
	struct Property_value_representation { typedef Iterator<CProperty_value_representation> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType12
