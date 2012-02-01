#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CFile_formatType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CFile_formatType



namespace cutting_tool_schema_arm
{

class CFile_formatType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CFile_formatType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CFile_formatType(CFile_formatType const& init);
	void operator=(CFile_formatType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CFile_formatType); }
	MemberElement<CDocument_format_property, _altova_mi_altova_CFile_formatType_altova_Document_format_property> Document_format_property;
	struct Document_format_property { typedef Iterator<CDocument_format_property> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CFile_formatType
