#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPlus_minus_bounds
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPlus_minus_bounds



namespace cutting_tool_schema_arm
{

class CPlus_minus_bounds : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CPlus_minus_bounds(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CPlus_minus_bounds(CPlus_minus_bounds const& init);
	void operator=(CPlus_minus_bounds const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CPlus_minus_bounds); }

	MemberAttribute<string_type,_altova_mi_altova_CPlus_minus_bounds_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CPlus_minus_bounds_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_CPlus_minus_bounds_altova_Lower_bound> Lower_bound;
	struct Lower_bound { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CPlus_minus_bounds_altova_Significant_digits> Significant_digits;
	struct Significant_digits { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CPlus_minus_bounds_altova_Upper_bound> Upper_bound;
	struct Upper_bound { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CPlus_minus_bounds_altova_Value_determination> Value_determination;
	struct Value_determination { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPlus_minus_bounds
