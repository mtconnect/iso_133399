#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDescribing_property_valueType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDescribing_property_valueType



namespace cutting_tool_schema_arm
{

class CDescribing_property_valueType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDescribing_property_valueType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDescribing_property_valueType(CDescribing_property_valueType const& init);
	void operator=(CDescribing_property_valueType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDescribing_property_valueType); }
	MemberElement<CProperty_value_representation, _altova_mi_altova_CDescribing_property_valueType_altova_Property_value_representation> Property_value_representation;
	struct Property_value_representation { typedef Iterator<CProperty_value_representation> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDescribing_property_valueType
