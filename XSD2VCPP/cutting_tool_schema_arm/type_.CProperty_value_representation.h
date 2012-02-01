#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CProperty_value_representation
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CProperty_value_representation



namespace cutting_tool_schema_arm
{

class CProperty_value_representation : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CProperty_value_representation(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CProperty_value_representation(CProperty_value_representation const& init);
	void operator=(CProperty_value_representation const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CProperty_value_representation); }

	MemberAttribute<string_type,_altova_mi_altova_CProperty_value_representation_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CProperty_value_representation_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CDefinitionType2, _altova_mi_altova_CProperty_value_representation_altova_Definition> Definition;
	struct Definition { typedef Iterator<CDefinitionType2> iterator; };
	MemberElement<CGlobal_unitType, _altova_mi_altova_CProperty_value_representation_altova_Global_unit> Global_unit;
	struct Global_unit { typedef Iterator<CGlobal_unitType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CProperty_value_representation_altova_Qualifier> Qualifier;
	struct Qualifier { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CSpecified_valueType, _altova_mi_altova_CProperty_value_representation_altova_Specified_value> Specified_value;
	struct Specified_value { typedef Iterator<CSpecified_valueType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CProperty_value_representation_altova_Value_determination> Value_determination;
	struct Value_determination { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CProperty_value_representation
