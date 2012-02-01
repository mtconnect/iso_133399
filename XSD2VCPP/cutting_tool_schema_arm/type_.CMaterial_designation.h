#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CMaterial_designation
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CMaterial_designation



namespace cutting_tool_schema_arm
{

class CMaterial_designation : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CMaterial_designation(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CMaterial_designation(CMaterial_designation const& init);
	void operator=(CMaterial_designation const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CMaterial_designation); }

	MemberAttribute<string_type,_altova_mi_altova_CMaterial_designation_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CMaterial_designation_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_CMaterial_designation_altova_Material_name> Material_name;
	struct Material_name { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CMaterial_designation
