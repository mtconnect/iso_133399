#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CProperty_sourceType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CProperty_sourceType



namespace cutting_tool_schema_arm
{

class CProperty_sourceType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CProperty_sourceType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CProperty_sourceType(CProperty_sourceType const& init);
	void operator=(CProperty_sourceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CProperty_sourceType); }
	MemberElement<CPlib_property_reference, _altova_mi_altova_CProperty_sourceType_altova_Plib_property_reference> Plib_property_reference;
	struct Plib_property_reference { typedef Iterator<CPlib_property_reference> iterator; };
	MemberElement<CExternal_library_reference, _altova_mi_altova_CProperty_sourceType_altova_External_library_reference> External_library_reference;
	struct External_library_reference { typedef Iterator<CExternal_library_reference> iterator; };
	MemberElement<CDocument, _altova_mi_altova_CProperty_sourceType_altova_Document> Document;
	struct Document { typedef Iterator<CDocument> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CProperty_sourceType
