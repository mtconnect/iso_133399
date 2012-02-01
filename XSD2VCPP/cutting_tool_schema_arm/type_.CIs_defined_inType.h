#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CIs_defined_inType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CIs_defined_inType



namespace cutting_tool_schema_arm
{

class CIs_defined_inType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CIs_defined_inType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CIs_defined_inType(CIs_defined_inType const& init);
	void operator=(CIs_defined_inType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CIs_defined_inType); }
	MemberElement<CCartesian_coordinate_space, _altova_mi_altova_CIs_defined_inType_altova_Cartesian_coordinate_space> Cartesian_coordinate_space;
	struct Cartesian_coordinate_space { typedef Iterator<CCartesian_coordinate_space> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CIs_defined_inType
