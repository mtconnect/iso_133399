#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDepth_of_cutType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDepth_of_cutType



namespace cutting_tool_schema_arm
{

class CDepth_of_cutType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDepth_of_cutType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDepth_of_cutType(CDepth_of_cutType const& init);
	void operator=(CDepth_of_cutType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDepth_of_cutType); }
	MemberElement<CValue_with_unit, _altova_mi_altova_CDepth_of_cutType_altova_Value_with_unit> Value_with_unit;
	struct Value_with_unit { typedef Iterator<CValue_with_unit> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDepth_of_cutType
