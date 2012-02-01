#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCoating
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCoating



namespace cutting_tool_schema_arm
{

class CCoating : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CCoating(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CCoating(CCoating const& init);
	void operator=(CCoating const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCoating); }

	MemberAttribute<string_type,_altova_mi_altova_CCoating_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CCoating_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_CCoating_altova_Coating_name> Coating_name;
	struct Coating_name { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CCoating_altova_Coating_process> Coating_process;
	struct Coating_process { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCoating
