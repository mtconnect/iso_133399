#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CIs_defined_byType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CIs_defined_byType



namespace cutting_tool_schema_arm
{

class CIs_defined_byType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CIs_defined_byType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CIs_defined_byType(CIs_defined_byType const& init);
	void operator=(CIs_defined_byType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CIs_defined_byType); }
	MemberElement<CLimits_and_fits, _altova_mi_altova_CIs_defined_byType_altova_Limits_and_fits> Limits_and_fits;
	struct Limits_and_fits { typedef Iterator<CLimits_and_fits> iterator; };
	MemberElement<CPlus_minus_bounds, _altova_mi_altova_CIs_defined_byType_altova_Plus_minus_bounds> Plus_minus_bounds;
	struct Plus_minus_bounds { typedef Iterator<CPlus_minus_bounds> iterator; };
	MemberElement<CFitting_bounds, _altova_mi_altova_CIs_defined_byType_altova_Fitting_bounds> Fitting_bounds;
	struct Fitting_bounds { typedef Iterator<CFitting_bounds> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CIs_defined_byType
