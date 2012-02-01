#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDensityType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDensityType



namespace cutting_tool_schema_arm
{

class CDensityType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDensityType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDensityType(CDensityType const& init);
	void operator=(CDensityType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDensityType); }
	MemberElement<CValue_with_unit, _altova_mi_altova_CDensityType_altova_Value_with_unit> Value_with_unit;
	struct Value_with_unit { typedef Iterator<CValue_with_unit> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDensityType
