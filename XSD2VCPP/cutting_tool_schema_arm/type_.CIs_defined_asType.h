#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CIs_defined_asType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CIs_defined_asType



namespace cutting_tool_schema_arm
{

class CIs_defined_asType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CIs_defined_asType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CIs_defined_asType(CIs_defined_asType const& init);
	void operator=(CIs_defined_asType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CIs_defined_asType); }
	MemberElement<CDigital_file, _altova_mi_altova_CIs_defined_asType_altova_Digital_file> Digital_file;
	struct Digital_file { typedef Iterator<CDigital_file> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CIs_defined_asType
