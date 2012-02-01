#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CContentType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CContentType



namespace cutting_tool_schema_arm
{

class CContentType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CContentType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CContentType(CContentType const& init);
	void operator=(CContentType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CContentType); }
	MemberElement<CDocument_content_property, _altova_mi_altova_CContentType_altova_Document_content_property> Document_content_property;
	struct Document_content_property { typedef Iterator<CDocument_content_property> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CContentType
