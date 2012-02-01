#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRepresentation_formatType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRepresentation_formatType



namespace cutting_tool_schema_arm
{

class CRepresentation_formatType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRepresentation_formatType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRepresentation_formatType(CRepresentation_formatType const& init);
	void operator=(CRepresentation_formatType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRepresentation_formatType); }
	MemberElement<CDocument_format_property, _altova_mi_altova_CRepresentation_formatType_altova_Document_format_property> Document_format_property;
	struct Document_format_property { typedef Iterator<CDocument_format_property> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRepresentation_formatType
