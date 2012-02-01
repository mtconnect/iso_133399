#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLimits_and_fits
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLimits_and_fits



namespace cutting_tool_schema_arm
{

class CLimits_and_fits : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CLimits_and_fits(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CLimits_and_fits(CLimits_and_fits const& init);
	void operator=(CLimits_and_fits const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CLimits_and_fits); }

	MemberAttribute<string_type,_altova_mi_altova_CLimits_and_fits_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CLimits_and_fits_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_CLimits_and_fits_altova_Deviation> Deviation;
	struct Deviation { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CLimits_and_fits_altova_Fitting_type> Fitting_type;
	struct Fitting_type { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CLimits_and_fits_altova_Grade> Grade;
	struct Grade { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLimits_and_fits
