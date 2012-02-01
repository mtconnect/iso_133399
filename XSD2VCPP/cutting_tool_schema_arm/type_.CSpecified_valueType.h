#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSpecified_valueType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSpecified_valueType



namespace cutting_tool_schema_arm
{

class CSpecified_valueType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CSpecified_valueType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CSpecified_valueType(CSpecified_valueType const& init);
	void operator=(CSpecified_valueType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CSpecified_valueType); }
	MemberElement<CProperty_value, _altova_mi_altova_CSpecified_valueType_altova_Property_value> Property_value;
	struct Property_value { typedef Iterator<CProperty_value> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSpecified_valueType
