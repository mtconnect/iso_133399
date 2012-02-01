#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCartesian_coordinate_space
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCartesian_coordinate_space



namespace cutting_tool_schema_arm
{

class CCartesian_coordinate_space : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CCartesian_coordinate_space(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CCartesian_coordinate_space(CCartesian_coordinate_space const& init);
	void operator=(CCartesian_coordinate_space const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCartesian_coordinate_space); }

	MemberAttribute<string_type,_altova_mi_altova_CCartesian_coordinate_space_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CCartesian_coordinate_space_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CUnit_of_valuesType, _altova_mi_altova_CCartesian_coordinate_space_altova_Unit_of_values> Unit_of_values;
	struct Unit_of_values { typedef Iterator<CUnit_of_valuesType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCartesian_coordinate_space
