#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CFileType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CFileType



namespace cutting_tool_schema_arm
{

class CFileType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CFileType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CFileType(CFileType const& init);
	void operator=(CFileType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CFileType); }
	MemberElement<CDigital_file, _altova_mi_altova_CFileType_altova_Digital_file> Digital_file;
	struct Digital_file { typedef Iterator<CDigital_file> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CFileType
