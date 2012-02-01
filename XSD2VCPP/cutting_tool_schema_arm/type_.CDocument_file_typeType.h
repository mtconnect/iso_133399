#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_file_typeType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_file_typeType



namespace cutting_tool_schema_arm
{

class CDocument_file_typeType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDocument_file_typeType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDocument_file_typeType(CDocument_file_typeType const& init);
	void operator=(CDocument_file_typeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDocument_file_typeType); }
	MemberElement<CDocument_type_property, _altova_mi_altova_CDocument_file_typeType_altova_Document_type_property> Document_type_property;
	struct Document_type_property { typedef Iterator<CDocument_type_property> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_file_typeType
