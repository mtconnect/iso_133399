#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValuesType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValuesType



namespace cutting_tool_schema_arm
{

class CValuesType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CValuesType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CValuesType(CValuesType const& init);
	void operator=(CValuesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CValuesType); }
	MemberElement<CProperty_value, _altova_mi_altova_CValuesType_altova_Property_value> Property_value;
	struct Property_value { typedef Iterator<CProperty_value> iterator; };
	MemberElement<CValue_with_unit, _altova_mi_altova_CValuesType_altova_Value_with_unit> Value_with_unit;
	struct Value_with_unit { typedef Iterator<CValue_with_unit> iterator; };
	MemberElement<CString_value, _altova_mi_altova_CValuesType_altova_String_value> String_value;
	struct String_value { typedef Iterator<CString_value> iterator; };
	MemberElement<CValue_list, _altova_mi_altova_CValuesType_altova_Value_list> Value_list;
	struct Value_list { typedef Iterator<CValue_list> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValuesType
