#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CUnit
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CUnit



namespace cutting_tool_schema_arm
{

class CUnit : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CUnit(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CUnit(CUnit const& init);
	void operator=(CUnit const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CUnit); }

	MemberAttribute<string_type,_altova_mi_altova_CUnit_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CUnit_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_CUnit_altova_Unit_name> Unit_name;
	struct Unit_name { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CUnit
