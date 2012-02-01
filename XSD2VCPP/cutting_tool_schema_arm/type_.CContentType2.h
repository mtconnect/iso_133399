#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CContentType2
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CContentType2



namespace cutting_tool_schema_arm
{

class CContentType2 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CContentType2(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CContentType2(CContentType2 const& init);
	void operator=(CContentType2 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CContentType2); }
	MemberElement<CDocument_content_property, _altova_mi_altova_CContentType2_altova_Document_content_property> Document_content_property;
	struct Document_content_property { typedef Iterator<CDocument_content_property> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CContentType2
